//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;
@protocol PLSiriVocabularyService;

@interface PLSiriVocabularyUpdater : NSObject
{
    id <PLSiriVocabularyService> _vocabularyService;	// 8 = 0x8
    PLPhotoLibrary *_photoLibrary;	// 16 = 0x10
}

+ (void)updateAllVocabulariesInLibrary:(id)arg1 withService:(id)arg2;	// IMP=0x000000000037321e
- (void).cxx_destruct;	// IMP=0x00000000003731bb
- (id)personNamesFromDictionaries:(id)arg1;	// IMP=0x0000000000373002
- (void)updateContactVocabularyFromPersonDictionaries:(id)arg1;	// IMP=0x0000000000372e02
- (id)_fetchPersonDictionariesInContext:(id)arg1;	// IMP=0x0000000000372b76
- (void)_updateContactsVocabularyInContext:(id)arg1;	// IMP=0x0000000000372af4
- (id)localizedTitleForAlbumDictionary:(id)arg1;	// IMP=0x0000000000372a1f
- (id)albumTitlesFromDictionaries:(id)arg1;	// IMP=0x000000000037285d
- (void)updateAlbumVocabularyFromAlbumDictionaries:(id)arg1;	// IMP=0x000000000037265d
- (id)_fetchAlbumDictionariesInContext:(id)arg1;	// IMP=0x0000000000372369
- (void)_updateAlbumsVocabularyInContext:(id)arg1;	// IMP=0x00000000003722e7
- (void)updateAllVocabularies;	// IMP=0x00000000003721ee
- (id)initWithVocabularyService:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x0000000000372155
- (id)init;	// IMP=0x0000000000372123

@end
