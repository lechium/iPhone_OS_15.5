//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cards/CRJSObjectExport-Protocol.h>

@interface CRJSObject : NSObject <CRJSObjectExport>
{
    id _backingObject;	// 8 = 0x8
}

+ (id)objectWithClassName:(id)arg1 objectType:(id)arg2;	// IMP=0x0000000000009859
- (void).cxx_destruct;	// IMP=0x000000000000a018
@property(readonly, nonatomic) id backingObject; // @synthesize backingObject=_backingObject;
- (id)_backingObjectForJSValue:(id)arg1;	// IMP=0x0000000000009c74
- (void)_logErrorLog:(id)arg1;	// IMP=0x0000000000009bc8
- (id)backingObjectValueForKey:(id)arg1;	// IMP=0x0000000000009b0c
- (void)setBackingObjectValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000992a
- (id)initWithClassName:(id)arg1 objectType:(long long)arg2;	// IMP=0x0000000000009750

@end
