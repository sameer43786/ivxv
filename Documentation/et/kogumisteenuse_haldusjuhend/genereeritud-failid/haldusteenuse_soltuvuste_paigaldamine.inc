.. Elektroonilise hääletamise infosüsteem IVXV

.. SEE FAIL ON GENEREERITUD AUTOMAATTESTI POOLT:
.. * steps/test_util/report.py

..  Feature: Kogumisteenuse käivitamine kõrgkäideldava konfiguratsiooniga
             features/end-to-end-10-collector-ha-setup.feature:7
   Scenario: Kogumisteenuse haldusteenuse paigaldus
             features/end-to-end-10-collector-ha-setup.feature:370
       Step: Haldur paigaldab haldusteenuse
             features/end-to-end-10-collector-ha-setup.feature:376

.. code-block:: text

   root@admin # apt-get install --yes --quiet adduser openssh-server openssl rsync rsyslog rsyslog-relp sudo tzdata locales libc6 python3-bottle python3-dateutil python3-debian python3-docopt python3-fasteners python3-jinja2 python3-jsonschema python3-openssl python3-pkg-resources python3-yaml python3:any apache2 cron fonts-font-awesome javascript-common language-pack-et libapache2-mod-wsgi-py3 libjs-bootstrap libjs-jquery libjs-jquery-datatables libjs-jquery-datatables-extensions python3-gdbm python3-requests ssl-cert
   Reading package lists...
   Building dependency tree...
   Reading state information...
   adduser is already the newest version (3.118ubuntu2).
   cron is already the newest version (3.0pl1-136ubuntu1).
   fonts-font-awesome is already the newest version (5.0.10+really4.7.0~dfsg-1).
   javascript-common is already the newest version (11).
   libapache2-mod-wsgi-py3 is already the newest version (4.6.8-1ubuntu3).
   libjs-jquery is already the newest version (3.3.1~dfsg-3).
   libjs-jquery on määratud käsitsi paigaldatuks.
   ...
   Paki apache2-data (2.4.41-4ubuntu3.8) paikasättimine ...
   Paki openssl (1.1.1f-1ubuntu2.10) paikasättimine ...
   Paki rsync (3.1.3-8ubuntu0.1) paikasättimine ...
   invoke-rc.d: WARNING: No init system and policy-rc.d missing! Defaulting to block.
   Paki apache2-utils (2.4.41-4ubuntu3.8) paikasättimine ...
   Paki apache2 (2.4.41-4ubuntu3.8) paikasättimine ...
   invoke-rc.d: WARNING: No init system and policy-rc.d missing! Defaulting to block.
   invoke-rc.d: WARNING: No init system and policy-rc.d missing! Defaulting to block.
   Processing triggers for systemd (245.4-4ubuntu3.13) ...
