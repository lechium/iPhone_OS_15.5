//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisualTestKit/NSObject-Protocol.h>

@class NSString, UIImage, XCTestCase;
@protocol VTKAssertID;

@protocol VTKReferenceItemsSource <NSObject>
- (UIImage *)referenceImageWithID:(id <VTKAssertID>)arg1 testCase:(XCTestCase *)arg2 error:(id *)arg3;

@optional
@property(copy, nonatomic) NSString *itemsDirectory;
@end

