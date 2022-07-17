//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VUIPlistMediaDatabase : NSObject
{
    NSURL *_fileURL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_databaseFileDispatchSource;	// 24 = 0x18
    NSMutableDictionary *_homeVideoByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_movieByIdentifier;	// 40 = 0x28
    NSMutableDictionary *_movieRentalByIdentifier;	// 48 = 0x30
    NSMutableDictionary *_showByIdentifier;	// 56 = 0x38
}

+ (id)_sortedEntitiesArray:(id)arg1;	// IMP=0x000000000002322c
+ (void)_removeItem:(id)arg1 itemByIdentifier:(id)arg2;	// IMP=0x0000000000022ef9
+ (void)_addItem:(id)arg1 itemByIdentifier:(id)arg2;	// IMP=0x0000000000022b11
- (void).cxx_destruct;	// IMP=0x000000000002361d
@property(retain, nonatomic) NSMutableDictionary *showByIdentifier; // @synthesize showByIdentifier=_showByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *movieRentalByIdentifier; // @synthesize movieRentalByIdentifier=_movieRentalByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *movieByIdentifier; // @synthesize movieByIdentifier=_movieByIdentifier;
@property(retain, nonatomic) NSMutableDictionary *homeVideoByIdentifier; // @synthesize homeVideoByIdentifier=_homeVideoByIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *databaseFileDispatchSource; // @synthesize databaseFileDispatchSource=_databaseFileDispatchSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)_startMonitoringDatabaseFile;	// IMP=0x000000000002332c
- (void)_removeEntityWithIdentifier:(id)arg1;	// IMP=0x0000000000022f6b
- (void)_removeMovieRental:(id)arg1;	// IMP=0x0000000000022e85
- (void)_removeMovie:(id)arg1;	// IMP=0x0000000000022e11
- (void)_removeHomeVideo:(id)arg1;	// IMP=0x0000000000022d9d
- (void)_removeEpisode:(id)arg1 fromSeason:(id)arg2;	// IMP=0x0000000000022ced
- (void)_removeSeason:(id)arg1 fromShow:(id)arg2;	// IMP=0x0000000000022c3d
- (void)_removeShow:(id)arg1;	// IMP=0x0000000000022bad
- (void)_addMovieRental:(id)arg1;	// IMP=0x0000000000022a9d
- (void)_addMovie:(id)arg1;	// IMP=0x0000000000022a29
- (void)_addHomeVideo:(id)arg1;	// IMP=0x00000000000229b5
- (void)_addEpisode:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;	// IMP=0x000000000002281c
- (void)_addSeason:(id)arg1 showIdentifier:(id)arg2;	// IMP=0x0000000000022558
- (void)_addShow:(id)arg1;	// IMP=0x00000000000221fb
- (id)_seasons;	// IMP=0x0000000000021fdf
- (id)_dictionaryRepresentation;	// IMP=0x0000000000021a11
- (void)_parseDatabaseAndSendNotification;	// IMP=0x00000000000219ad
- (_Bool)_parseDatabase;	// IMP=0x0000000000021109
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020d76
- (unsigned long long)hash;	// IMP=0x0000000000020c83
- (_Bool)saveToFileURL:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000208c1
- (_Bool)_saveWithError:(out id *)arg1;	// IMP=0x000000000002086b
- (id)itemForIdentifier:(id)arg1;	// IMP=0x000000000002080b
- (void)removeDownloadedMediaForIdentifier:(id)arg1;	// IMP=0x00000000000204e1
- (id)entityForIdentifier:(id)arg1;	// IMP=0x0000000000020066
- (void)updateEntityWithIdentifier:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3;	// IMP=0x000000000001ffd5
- (void)updateEntity:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3;	// IMP=0x000000000001fcdb
- (void)removeEntityWithIdentifier:(id)arg1;	// IMP=0x000000000001fb8e
- (void)addEntity:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3;	// IMP=0x000000000001f7cd
@property(readonly, nonatomic) NSArray *episodes;
@property(readonly, nonatomic) NSArray *seasons;
@property(readonly, nonatomic) NSArray *shows;
@property(readonly, nonatomic) NSArray *homeVideos;
@property(readonly, nonatomic) NSArray *movieRentals;
@property(readonly, nonatomic) NSArray *movies;
- (void)dealloc;	// IMP=0x000000000001ecbc
- (id)init;	// IMP=0x000000000001ec00
- (id)initWithURL:(id)arg1;	// IMP=0x000000000001eb7c

@end
