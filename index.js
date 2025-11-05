const express = require('express');
const app = express();
const db = require('./models');
const PORT = 3001;

app.use(express.json());
app.use(express.urlencoded({ extended: false }));

app.listen(PORT, () => {
    console.log(`Server started on port 3001`);
});
db.sequelize.sync()
    .then((result) => {
        app.listen(3001, () => {
            console.log('Server Started');
        })
    })
    .catch((err) => {
        console.log(err);
    })


// CREATE - Tambah hotel baru
    app.post("/hotel", async(req, res) => {
        const data = req.body;
        try {
            const hotel = await db.Hotel.create(data);
            res.send(hotel);
        } catch(err) {
            res.status(500).send(err);
        }
    });

    // READ - Ambil semua hotel
    app.get("/hotel", async(req, res) => {
        try {
            const hotel = await db.Hotel.findAll();
            res.send(hotel);
        } catch(err) {
            res.status(500).send(err);
        }
    });