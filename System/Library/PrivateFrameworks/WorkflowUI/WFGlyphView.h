//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, WFWorkflowIconDrawer;

@interface WFGlyphView
{
    WFWorkflowIconDrawer *_iconDrawer;	// 8 = 0x8
    struct UIEdgeInsets _glyphInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001698ee
@property(readonly, nonatomic) WFWorkflowIconDrawer *iconDrawer; // @synthesize iconDrawer=_iconDrawer;
@property(nonatomic) struct UIEdgeInsets glyphInsets; // @synthesize glyphInsets=_glyphInsets;
- (void)redrawIcon;	// IMP=0x000000000016988d
@property(retain, nonatomic) UIColor *glyphColor;
@property(nonatomic) unsigned short glyphCharacter;
@property(nonatomic) _Bool outline;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000169436
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000016931a

@end

