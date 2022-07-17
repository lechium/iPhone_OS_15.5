//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, NSThread;

@interface _ML3DatabaseConnectionWrapper : NSObject
{
    ML3DatabaseConnection *_connection;	// 8 = 0x8
    NSThread *_owningThread;	// 16 = 0x10
    NSThread *_borrowingThread;	// 24 = 0x18
    unsigned long long _useCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000192718
@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;
@property(retain, nonatomic) NSThread *borrowingThread; // @synthesize borrowingThread=_borrowingThread;
@property(retain, nonatomic) NSThread *owningThread; // @synthesize owningThread=_owningThread;
@property(retain, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
- (id)description;	// IMP=0x0000000000192634
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000001925b4

@end
