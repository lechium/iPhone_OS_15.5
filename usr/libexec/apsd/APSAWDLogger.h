//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface APSAWDLogger : NSObject
{
}

+ (id)logger;	// IMP=0x002000000006ea27
- (_Bool)_shouldSubmit;	// IMP=0x002000000006ebba
- (void)_submitAWDMetric:(id)arg1 withContainer:(id)arg2;	// IMP=0x001000000006eb44
- (void)_submitMetric:(id)arg1 withIdentifier:(unsigned int)arg2;	// IMP=0x001000000006eb32
- (void)logMetric:(id)arg1;	// IMP=0x001000000006eaab
- (id)init;	// IMP=0x001000000006ea7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

