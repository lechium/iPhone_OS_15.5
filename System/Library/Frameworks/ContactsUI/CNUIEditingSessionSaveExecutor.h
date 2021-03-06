//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIContactSaveExecutor-Protocol.h>

@class CNUICoreContactEditingSession, NSString;

__attribute__((visibility("hidden")))
@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor>
{
    CNUICoreContactEditingSession *_editingSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000113729
@property(readonly, nonatomic) CNUICoreContactEditingSession *editingSession; // @synthesize editingSession=_editingSession;
- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;	// IMP=0x0000000000113595
- (id)initWithEditingSession:(id)arg1;	// IMP=0x0000000000113517
- (id)init;	// IMP=0x00000000001134d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

