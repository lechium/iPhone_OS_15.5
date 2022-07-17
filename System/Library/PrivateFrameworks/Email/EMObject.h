//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/EMObject-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMObjectID, NSString;

@interface EMObject : NSObject <EMObject, NSSecureCoding, EFPubliclyDescribable>
{
    EMObjectID *_objectID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063e79
- (void).cxx_destruct;	// IMP=0x000000000006432b
@property(copy, nonatomic) EMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000640fe
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000063f69
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000063e81
- (void)_commonInitWithObjectID:(id)arg1;	// IMP=0x0000000000063e22
- (id)initWithObjectID:(id)arg1;	// IMP=0x0000000000063d49

// Remaining properties
@property(readonly) Class superclass;

@end
