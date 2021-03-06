//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HAP2TLVParamServiceList : NSObject <NSCopying, HAPTLVProtocol>
{
    NSMutableArray *_serviceSignatureList;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006ba77
- (void).cxx_destruct;	// IMP=0x0000000000067420
@property(retain, nonatomic) NSMutableArray *serviceSignatureList; // @synthesize serviceSignatureList=_serviceSignatureList;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000067262
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000671f9
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000066e79
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000066ba6
- (id)initWithServiceSignatureList:(id)arg1;	// IMP=0x0000000000066b33
- (id)init;	// IMP=0x0000000000066b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

