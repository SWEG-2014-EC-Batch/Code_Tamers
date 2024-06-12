# Generated by Django 3.1.5 on 2021-07-12 13:34

import cloudinary_storage.storage
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('courses', '0019_auto_20210712_1012'),
    ]

    operations = [
        migrations.AlterField(
            model_name='course',
            name='image_url',
            field=models.ImageField(storage=cloudinary_storage.storage.MediaCloudinaryStorage(), upload_to='course_images'),
        ),
        migrations.AlterField(
            model_name='sector',
            name='sector_image',
            field=models.ImageField(storage=cloudinary_storage.storage.MediaCloudinaryStorage(), upload_to='sector_images'),
        ),
    ]
