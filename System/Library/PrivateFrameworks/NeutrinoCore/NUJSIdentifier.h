//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIdentifier;

@interface NUJSIdentifier
{
}

- (id)toString;	// IMP=0x0000000000096ba8
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000968ee
- (_Bool)hasProperty:(id)arg1;	// IMP=0x0000000000096844
@property(readonly, nonatomic) NUIdentifier *identifier;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000964ac
- (id)initWithIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x000000000009647d

@end
