//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIDetailedRowComponent-Protocol.h>

@class NSString, SearchUIDetailedRowModel, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent>
{
    _Bool _usesCompactWidth;	// 8 = 0x8
    SearchUIDetailedRowModel *rowModel;	// 16 = 0x10
    id <SearchUIFeedbackDelegate> feedbackDelegate;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
}

+ (_Bool)supportsRowModel:(id)arg1;	// IMP=0x000000000005775e
+ (Class)leadingViewClassForRowModel:(id)arg1;	// IMP=0x00000000000574e7
- (void).cxx_destruct;	// IMP=0x000000000005785d
@property(nonatomic) _Bool usesCompactWidth; // @synthesize usesCompactWidth=_usesCompactWidth;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel; // @synthesize rowModel;
- (void)updateWithContacts:(id)arg1;	// IMP=0x00000000000577e8
- (id)imageView;	// IMP=0x00000000000577e0
@property(readonly) unsigned long long type;
- (void)updateWithRowModel:(id)arg1;	// IMP=0x00000000000577c6
- (id)setupView;	// IMP=0x00000000000577be
- (_Bool)shouldVerticallyCenter;	// IMP=0x00000000000577b6
- (void)hide;	// IMP=0x0000000000057774
- (id)init;	// IMP=0x00000000000576e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

