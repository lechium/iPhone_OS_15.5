//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSKeyedArchiverDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface TITypologyLogArchiverDelegate : NSObject <NSKeyedArchiverDelegate>
{
    NSMutableSet *_objects;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000040df9
@property(readonly, nonatomic) NSMutableSet *objects; // @synthesize objects=_objects;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;	// IMP=0x0000000000040c62
- (id)init;	// IMP=0x0000000000040c0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
