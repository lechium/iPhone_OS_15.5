//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSString;

@interface HAPDiagnosticsSnapshotAudioWrapper : NSObject <NSCopying, HAPTLVProtocol>
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000164acf
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001649a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000164956
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000016493c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001647ad
- (id)initWithValue:(unsigned long long)arg1;	// IMP=0x0000000000164770
- (id)init;	// IMP=0x0000000000164734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

