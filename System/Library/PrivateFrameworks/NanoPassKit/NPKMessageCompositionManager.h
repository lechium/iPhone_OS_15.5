//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NPKMessageCompositionManager : NSObject
{
    NSString *_listenerID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e8f7b
- (void)_sendComposition:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e874e
- (void)sendMessage:(id)arg1 withAppExtensionIdentifier:(id)arg2 toRecipient:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e86a7
- (void)dealloc;	// IMP=0x00000000000e8631
- (id)init;	// IMP=0x00000000000e8516

@end

