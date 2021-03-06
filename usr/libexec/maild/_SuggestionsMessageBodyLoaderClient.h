//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFMailMessage, MFMailMessageLibrary, NSString;
@protocol OS_dispatch_semaphore;

@interface _SuggestionsMessageBodyLoaderClient : NSObject
{
    MFMailMessageLibrary *_library;	// 8 = 0x8
    MFMailMessage *_message;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d517e
- (void)dealloc;	// IMP=0x00100000000d5144
- (void)notifyFullMessageContentsAvailableForMessage:(id)arg1;	// IMP=0x00100000000d513e
- (void)notifyFullMessageContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d5138
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d5132
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x00100000000d512c
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x00100000000d5120
- (id)message;	// IMP=0x00100000000d5112
- (double)ordering;	// IMP=0x00100000000d50c1
- (long long)priority;	// IMP=0x00100000000d50b9
- (id)initWithLibrary:(id)arg1 message:(id)arg2 semaphore:(id)arg3;	// IMP=0x00100000000d4fde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

