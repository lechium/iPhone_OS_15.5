//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICRDExpansionStateContextProviding-Protocol.h>
#import <NotesUI/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol ICRDSectionIdentifier <NSObject, ICRDExpansionStateContextProviding>
+ (NSArray *)sortDescriptors;
@property(readonly, nonatomic) NSString *title;
@end
