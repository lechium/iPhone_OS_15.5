//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSKAddedToDocumentContext : NSObject
{
}

+ (id)changeTrackingSubstorageForCopyContext;	// IMP=0x00000000000838f3
+ (id)exportFootnoteContext;	// IMP=0x000000000008388d
+ (id)undoDeleteContext;	// IMP=0x0000000000083827
+ (id)unhidingContext;	// IMP=0x00000000000837c1
+ (id)movingContext;	// IMP=0x000000000008375b
+ (id)insertingPrototypeContext;	// IMP=0x00000000000836f5
+ (id)dragCopyContext;	// IMP=0x000000000008368f
+ (id)dragMoveContext;	// IMP=0x0000000000083629
+ (id)pastingMatchStyleContext;	// IMP=0x00000000000835c3
+ (id)pastingContext;	// IMP=0x00000000000835aa
+ (id)importingMasterTemplateContextWithImporterID:(id)arg1;	// IMP=0x0000000000083574
+ (id)importingContextWithImporterID:(id)arg1;	// IMP=0x000000000008353e
+ (id)unarchivingContext;	// IMP=0x00000000000834d8
- (void)setTableIDMap:(struct __CFDictionary *)arg1;	// IMP=0x0000000000083a02
- (struct __CFDictionary *)tableIDMap;	// IMP=0x00000000000839fa
- (id)undoContext;	// IMP=0x00000000000839f2
- (_Bool)changeTrackingSubstorage;	// IMP=0x00000000000839ea
- (_Bool)exportingFootnotes;	// IMP=0x00000000000839e2
- (_Bool)matchStyle;	// IMP=0x00000000000839da
- (_Bool)syncChanges;	// IMP=0x00000000000839d2
- (_Bool)uniqueBookmarks;	// IMP=0x00000000000839ca
- (_Bool)autoUpdateSmartFields;	// IMP=0x00000000000839c2
- (_Bool)invokeDOLC;	// IMP=0x00000000000839ba
- (_Bool)wasUndoDelete;	// IMP=0x00000000000839b2
- (_Bool)wasUnhidden;	// IMP=0x00000000000839aa
- (_Bool)wasMoved;	// IMP=0x00000000000839a2
- (_Bool)wasDragMoved;	// IMP=0x000000000008399a
- (_Bool)wasDragOperation;	// IMP=0x0000000000083992
- (_Bool)wasPasted;	// IMP=0x000000000008398a
- (_Bool)wasImportedFromMasterTemplate;	// IMP=0x0000000000083982
- (_Bool)wasImported;	// IMP=0x0000000000083969
- (id)importerID;	// IMP=0x0000000000083961
- (_Bool)wasUnarchived;	// IMP=0x0000000000083959

@end

