//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/MPMediaPickerControllerDelegate-Protocol.h>

@class NSString;

@interface SUScriptMediaPickerNativeObject <MPMediaPickerControllerDelegate>
{
}

- (void)mediaPickerDidCancel:(id)arg1;	// IMP=0x00000000000b93b1
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;	// IMP=0x00000000000b92f0
- (void)setupNativeObject;	// IMP=0x00000000000b929a
- (void)destroyNativeObject;	// IMP=0x00000000000b9245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
