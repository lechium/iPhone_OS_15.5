//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPEntityPropertyTranslator-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>
{
    NSString *_keyPath;	// 8 = 0x8
    CDUnknownBlockType _valueTransformBlock;	// 16 = 0x10
}

+ (id)translatorWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051cff
+ (id)translatorWithKeyPath:(id)arg1;	// IMP=0x0000000000051cc4
- (void).cxx_destruct;	// IMP=0x0000000000051db6
@property(readonly, nonatomic) CDUnknownBlockType valueTransformBlock; // @synthesize valueTransformBlock=_valueTransformBlock;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)valueFromSource:(id)arg1 context:(id)arg2;	// IMP=0x0000000000051d57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

