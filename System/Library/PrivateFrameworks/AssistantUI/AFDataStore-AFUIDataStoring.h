//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFDataStore.h>

#import <AssistantUI/AFUIDataStoring-Protocol.h>

@class NSString;

@interface AFDataStore (AFUIDataStoring) <AFUIDataStoring>
- (id)afui_dataStoringShim;	// IMP=0x000000000001f680
- (id)imageForKey:(id)arg1;	// IMP=0x000000000001f5ef
- (void)setImage:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001f50c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
