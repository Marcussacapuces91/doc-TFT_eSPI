# Documentation TFT_eSPI

[![Documentation Status](https://readthedocs.org/projects/doc-tft-espi/badge/?version=latest)](https://doc-tft-espi.readthedocs.io)

Vous trouverez ici un projet de documentation pour la librairie [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) avec 
`Read the Docs`. Vous êtes encouragés à m'aider dans ce projet de documentation.

Read the Docs Dashboard: https://beta.readthedocs.org/projects/doc-tft-espi/

------

:books:[docs/](https://github.com/Marcussacapuces91/doc-TFT_eSPI/tree/main/docs)<br>
Les différents fichiers principalement en Markdown comme source de la documentation. Ils sont "compilés" avec
[MkDocs](https://mkdocs.readthedocs.io/en/stable/) avant d'être publiés sur le site [Read the Docs](https://doc-tft-espi.readthedocs.io/).

:gear:[.readthedocs.yaml](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/.readthedocs.yaml)<br>
Read the Docs Build configuration is stored in `.readthedocs.yaml`.

:gear:[mkdocs.yml](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/mkdocs.yml)<br>
Ce fichier permet la [configuration du comportement de MkDocs](https://www.mkdocs.org/user-guide/configuration/), en
particulier la mise en œuvre d'extensions Markdown ou MkDocs.

:round_pushpin:[docs/requirements.txt](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/docs/requirements.txt) and 
[docs/requirements.in](https://github.com/Marcussacapuces91/doc-TFT_eSPI/blob/main/docs/requirements.in)<br>
Python dependencies are [pinned](https://docs.readthedocs.io/en/latest/guides/reproducible-builds.html)
(uses [pip-tools](https://pip-tools.readthedocs.io/en/latest/)) here. Make sure to add your Python dependencies to
`requirements.txt` or if you choose [pip-tools](https://pip-tools.readthedocs.io/en/latest/), edit
`docs/requirements.in` and remember to run `pip-compile docs/requirements.in`.

:scroll:[README.md](https://github.com/readthedocs-examples/example-mkdocs-basic/blob/main/README.md)<br>
Contents of this `README.md` are visible on GitHub only and **not** included on 
[the documentation index page](https://doc-tft-espi.readthedocs.io).

:interrobang:Questions / comments<br>
If you have questions related to this example, feel free to can ask them as a GitHub issue
[here](https://github.com/Marcussacapuces91/doc-TFT_eSPI/issues).

## Example Project usage

This project has a standard MkDocs layout which is built by Read the Docs almost the same way that you would build it
locally (on your own laptop!).

You can build and view this documentation project locally - we recommend that you activate
[a local Python virtual environment first](https://packaging.python.org/en/latest/guides/installing-using-pip-and-virtual-environments/#creating-a-virtual-environment):

```console
# Install required Python dependencies (MkDocs etc.)
pip install -r docs/requirements.txt

# Run the mkdocs development server
mkdocs serve
```

## Read the Docs tutorial

To get started with Read the Docs, you may also refer to the [Read the Docs tutorial](https://docs.readthedocs.io/en/stable/tutorial/). It provides a full walk-through of building an example project similar to the one in this repository.

-----
:copyright: 2024 by Marc SIBERT<br/>
Certaines parties du site sont [`AI-powered outline courtesy of LLaMA`](https://labs.perplexity.ai/)
