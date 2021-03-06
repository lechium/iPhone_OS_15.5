//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/ICStateHandlerProvider-Protocol.h>

@class NSString;

@interface ICDatabaseStateHandler : NSObject <ICStateHandlerProvider>
{
}

+ (void)addLoggable:(id)arg1 toDictionary:(id)arg2;	// IMP=0x0000000000009389
+ (id)stateDictionaryFromLoggables:(id)arg1;	// IMP=0x0000000000009208
+ (id)modernDatabaseState;	// IMP=0x0000000000008867
+ (id)miscState;	// IMP=0x0000000000008710
+ (id)stateDictionary;	// IMP=0x000000000000862b
+ (void)registerStateHandler;	// IMP=0x00000000000085b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

