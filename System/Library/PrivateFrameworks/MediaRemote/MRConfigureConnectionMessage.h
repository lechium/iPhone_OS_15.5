//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface MRConfigureConnectionMessage
{
}

- (unsigned long long)type;	// IMP=0x000000000003b464
@property(copy, nonatomic) NSString *groupID;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;	// IMP=0x000000000003b38e
- (id)initWithGroupID:(id)arg1;	// IMP=0x000000000003b2ff

@end
