//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PPRecordLoadingDelegate : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSDate *_loadRecordsDetectedSince;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a867
@property(retain, nonatomic) NSDate *loadRecordsDetectedSince; // @synthesize loadRecordsDetectedSince=_loadRecordsDetectedSince;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)resetRecordData;	// IMP=0x000000000003a83c
- (void)recentRecordLoadingCompletion;	// IMP=0x000000000003a836
- (unsigned char)recentRecordLoadingHandler:(id)arg1;	// IMP=0x000000000003a827
- (unsigned char)recentRecordLoadingSetup;	// IMP=0x000000000003a821
- (void)recordLoadingCompletion;	// IMP=0x000000000003a81b
- (unsigned char)recordLoadingHandler:(id)arg1;	// IMP=0x000000000003a80c
- (unsigned char)recordLoadingSetup;	// IMP=0x000000000003a806
- (id)description;	// IMP=0x000000000003a791
- (id)initWithName:(id)arg1;	// IMP=0x000000000003a627

@end
