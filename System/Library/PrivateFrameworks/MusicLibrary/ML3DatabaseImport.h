//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSMutableCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSData, NSFileHandle, NSString;
@protocol OS_tcc_identity;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_libraryPath;	// 8 = 0x8
    NSData *_trackData;	// 16 = 0x10
    NSData *_playlistData;	// 24 = 0x18
    NSFileHandle *_fileHandle;	// 32 = 0x20
    NSString *_syncAnchor;	// 40 = 0x28
    _Bool _resetSync;	// 48 = 0x30
    _Bool _sagaEnabled;	// 49 = 0x31
    long long _storeAccountID;	// 56 = 0x38
    long long _preferredVideoQuality;	// 64 = 0x40
    unsigned int _homeSharingBasePlaylistID;	// 72 = 0x48
    _Bool _tracksAreLibraryOwnedContent;	// 76 = 0x4c
    _Bool _playlistsAreLibraryOwnedContent;	// 77 = 0x4d
    _Bool _pendingMatch;	// 78 = 0x4e
    _Bool _isServerImport;	// 79 = 0x4f
    NSString *_syncLibraryID;	// 80 = 0x50
    _Bool _suspendable;	// 88 = 0x58
    NSObject<OS_tcc_identity> *_clientIdentity;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000172bc8
- (void).cxx_destruct;	// IMP=0x0000000000172a1b
@property(readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(readonly, nonatomic, getter=isSuspendable) _Bool suspendable; // @synthesize suspendable=_suspendable;
@property(readonly, nonatomic) NSString *syncLibraryID; // @synthesize syncLibraryID=_syncLibraryID;
@property(readonly, nonatomic) _Bool isServerImport; // @synthesize isServerImport=_isServerImport;
@property(readonly, nonatomic, getter=isPendingMatch) _Bool pendingMatch; // @synthesize pendingMatch=_pendingMatch;
@property(readonly, nonatomic) _Bool playlistsAreLibraryOwnedContent; // @synthesize playlistsAreLibraryOwnedContent=_playlistsAreLibraryOwnedContent;
@property(readonly, nonatomic) _Bool tracksAreLibraryOwnedContent; // @synthesize tracksAreLibraryOwnedContent=_tracksAreLibraryOwnedContent;
@property(readonly, nonatomic) unsigned int homeSharingBasePlaylistID; // @synthesize homeSharingBasePlaylistID=_homeSharingBasePlaylistID;
@property(readonly, nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(readonly, nonatomic) long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic, getter=isSagaEnabled) _Bool sagaEnabled; // @synthesize sagaEnabled=_sagaEnabled;
@property(readonly, nonatomic, getter=isResetSync) _Bool resetSync; // @synthesize resetSync=_resetSync;
@property(readonly, nonatomic) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(readonly, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) NSData *playlistData; // @synthesize playlistData=_playlistData;
@property(readonly, nonatomic) NSData *trackData; // @synthesize trackData=_trackData;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x00000000001728ac
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172552
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001722fc
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001722c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017229d
- (id)description;	// IMP=0x0000000000172220
- (id)init;	// IMP=0x0000000000172207
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3 clientIdentity:(id)arg4;	// IMP=0x00000000001720e0
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;	// IMP=0x0000000000172043

@end

