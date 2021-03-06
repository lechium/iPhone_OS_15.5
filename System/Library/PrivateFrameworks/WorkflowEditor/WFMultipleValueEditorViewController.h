//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class WFMultipleValueEditorView;
@protocol WFComponentNavigationContext;

@interface WFMultipleValueEditorViewController : UIViewController
{
    WFMultipleValueEditorView *_editorView;	// 8 = 0x8
    id <WFComponentNavigationContext> _navigationContext;	// 16 = 0x10
}

+ (Class)editorViewClass;	// IMP=0x00000000002ea845
- (void).cxx_destruct;	// IMP=0x00000000002ea814
@property(retain, nonatomic) id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFMultipleValueEditorView *editorView; // @synthesize editorView=_editorView;
- (struct CGSize)preferredContentSize;	// IMP=0x00000000002ea75e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002ea65b

@end

