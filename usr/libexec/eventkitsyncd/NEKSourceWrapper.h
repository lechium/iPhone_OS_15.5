//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NEKSourceAttributes, NSString;

@interface NEKSourceWrapper : NSObject
{
    NEKSourceAttributes *_attributes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0010000000044eba
@property(readonly, nonatomic) NEKSourceAttributes *attributes; // @synthesize attributes=_attributes;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)initWithAttributes:(id)arg1;	// IMP=0x0010000000044cc8
- (id)initWithSource:(id)arg1;	// IMP=0x0010000000006a98
- (id)initWithAccount:(id)arg1;	// IMP=0x0010000000009eb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
