//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/CUXPCCodable-Protocol.h>

@interface ENScanInstance : NSObject <CUXPCCodable>
{
    unsigned char _minimumAttenuation;	// 8 = 0x8
    unsigned char _typicalAttenuation;	// 9 = 0x9
    long long _secondsSinceLastScan;	// 16 = 0x10
}

@property(nonatomic) long long secondsSinceLastScan; // @synthesize secondsSinceLastScan=_secondsSinceLastScan;
@property(nonatomic) unsigned char typicalAttenuation; // @synthesize typicalAttenuation=_typicalAttenuation;
@property(nonatomic) unsigned char minimumAttenuation; // @synthesize minimumAttenuation=_minimumAttenuation;
- (id)description;	// IMP=0x000000000000df2f
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000000dec4
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dd4c

@end

