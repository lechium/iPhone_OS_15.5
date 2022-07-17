//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUScriptCanvasContext, UIImage;

@interface SUScriptSegmentedControlItem
{
    SUScriptCanvasContext *_canvas;	// 72 = 0x48
    NSString *_identifier;	// 80 = 0x50
    UIImage *_image;	// 88 = 0x58
    NSString *_imageURLString;	// 96 = 0x60
    NSString *_title;	// 104 = 0x68
    id _userInfo;	// 112 = 0x70
}

+ (void)initialize;	// IMP=0x00000000000c8e74
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x00000000000c8dab
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)scriptAttributeKeys;	// IMP=0x00000000000c8e11
- (id)attributeKeys;	// IMP=0x00000000000c8dff
- (void)_setImage:(id)arg1;	// IMP=0x00000000000c8d5e
- (id)_segmentedControl;	// IMP=0x00000000000c8d1f
- (void)_reloadUserInterface;	// IMP=0x00000000000c8bda
@property(retain) id userInfo;
@property(retain) NSString *title;
@property(retain) NSString *imageURL;
@property(retain) NSString *identifier;
@property(retain) SUScriptCanvasContext *canvas;
- (id)_className;	// IMP=0x00000000000c8247
- (id)newPageSection;	// IMP=0x00000000000c8019
- (void)dealloc;	// IMP=0x00000000000c7f89
- (id)initWithPageSection:(id)arg1;	// IMP=0x00000000000c7e9b

@end
