//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIButtonItemProvider : NSObject <NUIContainerViewDelegate>
{
    id <SearchUIFeedbackDelegate> _feedbackDelegate;	// 8 = 0x8
    NSMutableDictionary *_viewTypeToButtonList;	// 16 = 0x10
    NSMutableArray *_visibleButtonItems;	// 24 = 0x18
    UIView *_fillerView;	// 32 = 0x20
}

+ (void)commandButtons:(id)arg1 iterator:(CDUnknownBlockType)arg2;	// IMP=0x000000000009d3db
- (void).cxx_destruct;	// IMP=0x000000000009d7c7
@property(retain, nonatomic) UIView *fillerView; // @synthesize fillerView=_fillerView;
@property(retain, nonatomic) NSMutableArray *visibleButtonItems; // @synthesize visibleButtonItems=_visibleButtonItems;
@property(retain, nonatomic) NSMutableDictionary *viewTypeToButtonList; // @synthesize viewTypeToButtonList=_viewTypeToButtonList;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate=_feedbackDelegate;
@property(readonly) NSArray *buttonItemViews;
- (_Bool)containerView:(id)arg1 shouldRestartMeasurementDueToCompressionInAxis:(long long)arg2 forReason:(long long)arg3;	// IMP=0x000000000009ced6
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x000000000009cda7
- (void)makeButtonsCompact;	// IMP=0x000000000009cb54
- (id)initWithRowModel:(id)arg1 itemProvider:(id)arg2 feedbackDelegate:(id)arg3;	// IMP=0x000000000009c56d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
