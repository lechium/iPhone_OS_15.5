//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HVConsumerState : NSObject
{
    unsigned char _levelOfService;	// 8 = 0x8
    unsigned int _documentsConsumed;	// 12 = 0xc
    unsigned int _documentsIgnored;	// 16 = 0x10
    unsigned int _numberOfExtractions;	// 20 = 0x14
    unsigned int _numberOfInterruptions;	// 24 = 0x18
    unsigned int _errorsReported;	// 28 = 0x1c
}

@property(nonatomic) unsigned int errorsReported; // @synthesize errorsReported=_errorsReported;
@property(nonatomic) unsigned int numberOfInterruptions; // @synthesize numberOfInterruptions=_numberOfInterruptions;
@property(nonatomic) unsigned int numberOfExtractions; // @synthesize numberOfExtractions=_numberOfExtractions;
@property(nonatomic) unsigned int documentsIgnored; // @synthesize documentsIgnored=_documentsIgnored;
@property(nonatomic) unsigned int documentsConsumed; // @synthesize documentsConsumed=_documentsConsumed;
@property(nonatomic) unsigned char levelOfService; // @synthesize levelOfService=_levelOfService;
- (id)description;	// IMP=0x000000000000bb9a
- (id)init;	// IMP=0x000000000000bb54

@end

