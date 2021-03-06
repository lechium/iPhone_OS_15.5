//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString;

@interface TRIFactorNamespaceRecord : NSObject <NSCopying>
{
    NSString *_factorName;	// 8 = 0x8
    NSString *_namespaceName;	// 16 = 0x10
}

+ (id)factorRecordWithFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000000124c7
- (void).cxx_destruct;	// IMP=0x000000000001282b
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
@property(readonly, nonatomic) NSString *factorName; // @synthesize factorName=_factorName;
- (id)init;	// IMP=0x0000000000012811
- (id)description;	// IMP=0x00000000000127cd
- (unsigned long long)hash;	// IMP=0x0000000000012786
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001271e
- (_Bool)isEqualToFactorRecord:(id)arg1;	// IMP=0x00000000000125e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000125d5
- (id)copyWithReplacementNamespaceName:(id)arg1;	// IMP=0x0000000000012584
- (id)copyWithReplacementFactorName:(id)arg1;	// IMP=0x0000000000012533
- (id)initWithFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000001233f

@end

