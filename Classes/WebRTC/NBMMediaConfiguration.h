// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import "NBMTypes.h"
#import <WebRTC/RTCIceServer.h>


@interface NBMMediaConfiguration : NSObject <NSCopying>

@property (nonatomic, assign) NBMRendererType rendererType;
@property (nonatomic, assign) NBMAudioCodec audioCodec;
@property (nonatomic, assign) NSUInteger audioBandwidth;
@property (nonatomic, assign) NBMVideoCodec videoCodec;
@property (nonatomic, assign) NSUInteger videoBandwidth;
@property (nonatomic, assign) NBMVideoFormat receiverVideoFormat;
@property (nonatomic, assign) NBMCameraPosition cameraPosition;
@property (nonatomic, strong) NSMutableArray<RTCIceServer *> *iceServers;

/*
 NBMAudioCodecOpus
 NBMVideoCodecVP8
 640x480 @ 30 fps, Bi-Planar Full Range
 */
+ (instancetype)defaultConfiguration;

@end
