/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSString, UIImage, UIPDFDocument, UIPDFSelection;

@interface UIPDFPage : NSObject {
    struct CGPDFPage { } *_cgPage;
    UIPDFDocument *_document;
    UIImage *_pageImage;
    unsigned int _pageIndex;
    unsigned int _pageNumber;
    UIPDFSelection *_selection;
    NSString *_stringInReadingOrder;
}

@property(readonly) struct CGPDFPage { }* CGPage;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropBox;
@property(readonly) UIPDFDocument * document;
@property(retain) UIImage * pageImage;
@property(readonly) unsigned int pageIndex;
@property(readonly) unsigned int pageNumber;
@property(retain) UIPDFSelection * selection;

- (struct CGPDFPage { }*)CGPage;
- (unsigned long)cfCompareFlagsFromNSOptions:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropBoxAccountForRotation;
- (void)dealloc;
- (void)deliverImageWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5;
- (id)document;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned int)arg3;
- (id)getImageIfAvailable;
- (id)initWithCGPDFPage:(struct CGPDFPage { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBox;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediaBoxAccountForRotation;
- (id)pageImage;
- (unsigned int)pageIndex;
- (unsigned int)pageNumber;
- (unsigned int)rotation;
- (id)selection;
- (void)setPageImage:(id)arg1;
- (void)setSelection:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)string;

@end
