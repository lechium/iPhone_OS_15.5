//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDSICloudIdentityToken : NSObject
{
    NSString *_token;	// 8 = 0x8
}

+ (id)tokenForCurrentIdentityIfCloudKitEnabled;	// IMP=0x0040000000006768
- (void).cxx_destruct;	// IMP=0x0020000000006b75
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (id)_hashFor:(id)arg1;	// IMP=0x0010000000006b04
- (id)description;	// IMP=0x0010000000006a8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006a29
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006973
- (id)initWithCurrentIdentity;	// IMP=0x00100000000068f5
- (id)initFromArchive:(id)arg1;	// IMP=0x001000000000687b
- (id)initWithToken:(id)arg1;	// IMP=0x00100000000067dd

@end

