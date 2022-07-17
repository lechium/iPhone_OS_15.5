//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HAPSupportedAudioStreamConfigurations : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_configurations;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005057f
- (void).cxx_destruct;	// IMP=0x000000000005056f
@property(retain, nonatomic) NSMutableArray *configurations; // @synthesize configurations=_configurations;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000503b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000050348
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000004ffc8
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004fcf5
- (id)initWithConfigurations:(id)arg1;	// IMP=0x000000000004fc82
- (id)init;	// IMP=0x000000000004fc53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
