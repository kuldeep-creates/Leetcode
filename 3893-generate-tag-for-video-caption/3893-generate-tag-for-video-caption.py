class Solution:
    def generateTag(self, caption: str) -> str:
        words = caption.split()
        if not words:
            return "#"
        tag = "#" + words[0].lower()
        for w in words[1:]:
            tag += w.capitalize()
        cleaned = "#"
        for c in tag[1:]:
            if c.isalpha():
                cleaned += c
        return cleaned[:100]
