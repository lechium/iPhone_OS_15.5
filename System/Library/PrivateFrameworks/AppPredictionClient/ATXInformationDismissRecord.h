//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ATXInformationDismissRecord : NSObject
{
    NSString *_widgetBundleId;	// 8 = 0x8
    NSString *_criterion;	// 16 = 0x10
    NSDate *_blockWidgetUntilDate;	// 24 = 0x18
    NSDate *_blockCriterionUntilDate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000aa521
@property(readonly, nonatomic) NSDate *blockCriterionUntilDate; // @synthesize blockCriterionUntilDate=_blockCriterionUntilDate;
@property(readonly, nonatomic) NSDate *blockWidgetUntilDate; // @synthesize blockWidgetUntilDate=_blockWidgetUntilDate;
@property(readonly, nonatomic) NSString *criterion; // @synthesize criterion=_criterion;
@property(readonly, nonatomic) NSString *widgetBundleId; // @synthesize widgetBundleId=_widgetBundleId;
- (id)initWithWidgetBundleId:(id)arg1 criterion:(id)arg2 blockWidgetUntilDate:(id)arg3 blockCriterionUntilDate:(id)arg4;	// IMP=0x00000000000aa3fb
- (id)init;	// IMP=0x00000000000aa3f5

@end
