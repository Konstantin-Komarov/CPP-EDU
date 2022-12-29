{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "provenance": []
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "code",
      "source": [
        "#include <iostream>\n",
        "using namespace std;\n",
        "\n",
        "class someclass\n",
        "{\n",
        "    private:\n",
        "    struct{\n",
        "        float first;\n",
        "        float second;\n",
        "    };\n",
        "        double A, B;\n",
        "    public:\n",
        "        someclass(double a, double b)\n",
        "        {\n",
        "            A = a;\n",
        "            B = b;\n",
        "        }\n",
        "\n",
        "        double function(double x)\n",
        "        {\n",
        "            return A * x + B;\n",
        "        }\n",
        "    };\n",
        "\n",
        "    int main()\n",
        "    {\n",
        "        someclass x(17, 18);\n",
        "        cout << x.function(4) << endl;\n",
        "    }"
      ],
      "metadata": {
        "id": "Y6dQJIljQV1P",
        "colab": {
          "base_uri": "https://localhost:8080/",
          "height": 130
        },
        "outputId": "ba7c3178-1966-44d8-fb03-a9f8f637a442"
      },
      "execution_count": 4,
      "outputs": [
        {
          "output_type": "error",
          "ename": "SyntaxError",
          "evalue": "ignored",
          "traceback": [
            "\u001b[0;36m  File \u001b[0;32m\"<ipython-input-4-ac92a3c30ec7>\"\u001b[0;36m, line \u001b[0;32m2\u001b[0m\n\u001b[0;31m    using namespace std;\u001b[0m\n\u001b[0m          ^\u001b[0m\n\u001b[0;31mSyntaxError\u001b[0m\u001b[0;31m:\u001b[0m invalid syntax\n"
          ]
        }
      ]
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "HiXnv3MYQV38"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "OAwkvxj7QV6c"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "y2fgNtTBQV8_"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "sVGxzV1lQWAE"
      },
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "source": [],
      "metadata": {
        "id": "DbpEaQ06QWC7"
      },
      "execution_count": null,
      "outputs": []
    }
  ]
}