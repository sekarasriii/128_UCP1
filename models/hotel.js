module.exports = (sequelize, DataTypes) => {
    const Hotel = sequelize.define("Hotel", {
        id : {
            type : DataTypes.INTEGER,
            primaryKey : true,
            autoIncrement : true
        },
        tipe_kamar : {
            type : DataTypes.VARCHAR(50),
            allowNull : false
        },
        kapasitas_tamu : {
            type : DataTypes.INTEGER,
            allowNull : false
        },
        lantai : {
            type : DataTypes.VARCHAR(10),
            allowNull : false
        },
        fasilitas : {
            type : DataTypes.TEXT,
            allowNull : false
        },
        tanggal_pesan : {
            type : DataTypes.DATE,
            allowNull : false
        }
    }, {
        tableName : "Hotel",
        freezeTableName : true,
        timestamps : true //fungsi true
    });
    return Hotel;
};