//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3ClientImportSessionConfiguration, ML3DatabaseConnection, ML3MusicLibrary;

@interface ML3ClientImportServiceSession : NSObject
{
    void *_importSession;	// 8 = 0x8
    ML3DatabaseConnection *_databaseConnection;	// 16 = 0x10
    ML3MusicLibrary *_library;	// 24 = 0x18
    ML3ClientImportSessionConfiguration *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000297fe
- (_Bool)removeTrack:(id)arg1 persistentID:(id *)arg2;	// IMP=0x000000000002961a
- (_Bool)updateTrack:(id)arg1 persistentID:(id *)arg2;	// IMP=0x00000000000293d3
- (_Bool)addTrack:(id)arg1 persistentID:(id *)arg2;	// IMP=0x000000000002918e
- (_Bool)finish;	// IMP=0x0000000000029180
- (_Bool)begin;	// IMP=0x0000000000029153
- (void)dealloc;	// IMP=0x000000000002910b
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3;	// IMP=0x0000000000028fb0

@end
