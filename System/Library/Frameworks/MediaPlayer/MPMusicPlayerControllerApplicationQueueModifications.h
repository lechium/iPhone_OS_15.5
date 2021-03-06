//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding>
{
    NSDictionary *_insertedDescriptors;	// 8 = 0x8
    NSArray *_removedItemIdentifiers;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d4699
- (void).cxx_destruct;	// IMP=0x00000000001d4671
@property(readonly, nonatomic) NSArray *removedItemIdentifiers; // @synthesize removedItemIdentifiers=_removedItemIdentifiers;
@property(readonly, nonatomic) NSDictionary *insertedDescriptors; // @synthesize insertedDescriptors=_insertedDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d45ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d4454
- (id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2;	// IMP=0x00000000001d439b

@end

