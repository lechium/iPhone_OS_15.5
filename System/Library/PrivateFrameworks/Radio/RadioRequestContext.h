//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class SSVFairPlaySAPSession;

@interface RadioRequestContext : NSObject <NSCopying>
{
    SSVFairPlaySAPSession *_SAPSession;	// 8 = 0x8
    _Bool _usesLocalNetworking;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000258cc
@property(nonatomic) _Bool usesLocalNetworking; // @synthesize usesLocalNetworking=_usesLocalNetworking;
@property(retain, nonatomic) SSVFairPlaySAPSession *SAPSession; // @synthesize SAPSession=_SAPSession;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025833

@end

