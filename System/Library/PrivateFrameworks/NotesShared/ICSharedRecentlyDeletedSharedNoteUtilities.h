//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICSharedRecentlyDeletedSharedNoteUtilities : NSObject
{
}

+ (id)notesSharedViaICloudFromNotes:(id)arg1;	// IMP=0x00000000000c03ee
+ (unsigned long long)sharedNoteTypeForNotes:(id)arg1;	// IMP=0x00000000000bffd8
+ (id)messageForSharedNotesType:(unsigned long long)arg1;	// IMP=0x00000000000bffd0
+ (id)titleForSharedNotesType:(unsigned long long)arg1;	// IMP=0x00000000000bffc8
+ (void)showDeletingSharedNotesAlertWithType:(unsigned long long)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000bffc2
+ (void)showAlertsIfNecessaryForDeletingSharedNotes:(id)arg1 noteDeleteType:(unsigned long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000bff0c

@end

