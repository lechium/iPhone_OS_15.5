//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>
#import <WorkflowUI/WFColorPickerDelegate-Protocol.h>
#import <WorkflowUI/WFGlyphPickerDelegate-Protocol.h>

@class NSString, UIView, WFColorPicker, WFGlyphPicker, WFIconComposePreviewView, WFWorkflow;

@interface WFIconComposeViewController : UIViewController <WFColorPickerDelegate, WFGlyphPickerDelegate, UINavigationControllerDelegate>
{
    WFWorkflow *_workflow;	// 8 = 0x8
    WFIconComposePreviewView *_iconView;	// 16 = 0x10
    WFColorPicker *_colorPicker;	// 24 = 0x18
    WFGlyphPicker *_glyphPicker;	// 32 = 0x20
    UIView *_topSeperator;	// 40 = 0x28
    UIView *_bottomSeparator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001a7fd0
@property(nonatomic) __weak UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(nonatomic) __weak UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(nonatomic) __weak WFGlyphPicker *glyphPicker; // @synthesize glyphPicker=_glyphPicker;
@property(nonatomic) __weak WFColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(nonatomic) __weak WFIconComposePreviewView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void)colorPicker:(id)arg1 didSelectColor:(id)arg2;	// IMP=0x00000000001a7d7f
- (void)glyphPicker:(id)arg1 didSelectGlyphWithCharacter:(unsigned short)arg2;	// IMP=0x00000000001a7c58
- (void)updateAccessibilityValue;	// IMP=0x00000000001a7a3d
- (void)saveIcon:(id)arg1;	// IMP=0x00000000001a7965
- (void)pickedSegment:(id)arg1;	// IMP=0x00000000001a7836
- (void)loadView;	// IMP=0x00000000001a6775
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001a668d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

