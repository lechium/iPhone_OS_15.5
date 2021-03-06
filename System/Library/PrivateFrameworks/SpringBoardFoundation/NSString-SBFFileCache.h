//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

#import <SpringBoardFoundation/SBFFileCacheFileIdentifier-Protocol.h>

@interface NSString (SBFFileCache) <SBFFileCacheFileIdentifier>
- (id)fileCacheStableDataRepresentation;	// IMP=0x000000000002d60a
- (_Bool)sb_containsEmoji;	// IMP=0x000000000003de48
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(_Bool)arg4;	// IMP=0x000000000003dce0
- (_Bool)_isInScript:(long long)arg1 useLocaleOnly:(_Bool)arg2;	// IMP=0x000000000003dbeb
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(_Bool)arg3;	// IMP=0x000000000003dbd1
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;	// IMP=0x000000000003dbbc
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;	// IMP=0x000000000003db9f
- (_Bool)_isEntirelyCommon;	// IMP=0x000000000003da33
- (_Bool)_isEntirelyCharactersInScript:(long long)arg1;	// IMP=0x000000000003d7d1
- (_Bool)sb_isEntirelyCharactersInSet:(struct USet *)arg1;	// IMP=0x000000000003d754

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

