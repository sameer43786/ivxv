.. Elektroonilise hääletamise infosüsteem IVXV

.. Käsureautiliidi ivxv-config-apply kasutusjuhend

.. SEE FAIL ON GENEREERITUD AUTOMAATTESTI POOLT:
.. * features/steps/autodoc.py
.. * features/autodoc-utilities.feature

.. _ivxv-config-apply:

ivxv-config-apply
`````````````````

:command:`ivxv-config-apply --help`:

.. code-block:: text

   Apply loaded IVXV Collector config to services.

   Usage: ivxv-config-apply [--type=<type>] ... [<service-id>] ...

   Options:
       --type=<type>    Config type. Possible values are:
                        - election: election config file
                        - technical: collector technical config file
                        - choices: choices list
                        - districts: districts list
                        - voters: voters list
