//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyAction;

__attribute__((visibility("hidden")))
@interface CNQuickPropertyAction
{
}

- (void)performWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045904
- (unsigned long long)score;	// IMP=0x00000000000457f1
- (_Bool)enabled;	// IMP=0x000000000004576e
- (id)subtitleForContext:(long long)arg1;	// IMP=0x0000000000045653
- (id)titleForContext:(long long)arg1;	// IMP=0x00000000000455b7
- (id)identifier;	// IMP=0x000000000004553d
- (id)propertyItem;	// IMP=0x00000000000454ed
@property(readonly, nonatomic) CNPropertyAction *propertyAction;
- (id)initWithPropertyAction:(id)arg1;	// IMP=0x00000000000454ac

@end

