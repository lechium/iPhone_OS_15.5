//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGDPowerLog : NSObject
{
}

+ (void)pluginEndDeletion:(id)arg1;	// IMP=0x0000000000036ad0
+ (void)pluginStartDeletion:(id)arg1;	// IMP=0x0000000000036aca
+ (void)pluginEndProcessingSearchableItem:(id)arg1;	// IMP=0x0000000000036ac4
+ (void)pluginStartProcessingSearchableItem:(id)arg1;	// IMP=0x0000000000036abe
+ (void)pluginEndSetup:(id)arg1;	// IMP=0x0000000000036ab8
+ (void)pluginStartSetup:(id)arg1;	// IMP=0x0000000000036ab2
+ (void)endIngestOfMessages:(unsigned long long)arg1;	// IMP=0x0000000000036aa3
+ (void)startIngestOfMessages:(unsigned long long)arg1;	// IMP=0x0000000000036a91
+ (void)logPrewarmWithLastPrewarmTime:(double)arg1;	// IMP=0x0000000000036a2f
+ (void)endDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2;	// IMP=0x0000000000036a1d
+ (void)startDissectionOfMessage:(id)arg1 inContext:(unsigned long long)arg2;	// IMP=0x0000000000036a08

@end
