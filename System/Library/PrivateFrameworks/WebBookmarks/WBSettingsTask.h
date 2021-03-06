//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBWebsiteDataRecord;

@interface WBSettingsTask : NSObject
{
    long long _taskType;	// 8 = 0x8
    WBWebsiteDataRecord *_websiteDataRecord;	// 16 = 0x10
}

+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;	// IMP=0x000000000005a312
+ (id)taskWithType:(long long)arg1;	// IMP=0x000000000005a2da
- (void).cxx_destruct;	// IMP=0x000000000005a401
@property(readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord; // @synthesize websiteDataRecord=_websiteDataRecord;
@property(readonly, nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2;	// IMP=0x000000000005a364

@end

