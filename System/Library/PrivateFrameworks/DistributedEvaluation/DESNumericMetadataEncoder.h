//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/DESMetadataEncoder-Protocol.h>

@interface DESNumericMetadataEncoder : NSObject <DESMetadataEncoder>
{
}

+ (void)initialize;	// IMP=0x000000000002312d
- (id)zeroWithLength:(unsigned long long)arg1;	// IMP=0x0000000000023110
- (id)encodeNumberVector:(id)arg1 toLength:(unsigned long long)arg2;	// IMP=0x0000000000022f7d
- (id)encodeStringVector:(id)arg1 toLength:(unsigned long long)arg2;	// IMP=0x0000000000022efd
- (id)encodeNumber:(id)arg1 toLength:(unsigned long long)arg2;	// IMP=0x0000000000022e3a
- (id)encodeString:(id)arg1 toLength:(unsigned long long)arg2;	// IMP=0x0000000000022dba

@end
